#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include "CanHandler.h"
#include "PetitRobot.h"

using namespace std;
using namespace libcan;
typedef struct can_t can_t;
//typedef enum can_f can_f;

CanHandler::CanHandler()
{
	cout << "CanHandler::CanHandler()" << endl;

    can_ctx * ctx;
    if (can_init(&ctx) < 0) {
        perror("can_init");
        exit(1);
    }

    if (can_register_callback(ctx, 0, 0, CanHandler::recv) < 0) {
        perror("can_register_callback");
        exit(1);
    }
    if (can_listen_on(ctx, STDIN_FILENO, libcan::dec) < 0) {
        perror("can_listen_on");
        exit(1);
    }
}

void CanHandler::send(int id)
{
	cout << "CanHendler::send(" << id << ")" << endl;
}

void CanHandler::recv(can_t packet)
{
	cout << "CanHendler::process(" << packet.id << ")" << endl;
	if (packet.id == 1000) {
		cout << "Line captor answer" << endl;
		if (packet.length != 4) {
			cerr << "Wrong packet (length ≠ 4)" << endl;
			return;
		}
		CBS->cb.lineCaptorAnswer(packet.b1, packet.b2, packet.b3, packet.b4);
	} else if (packet.id == 1001) {
	} else {
	}
}
