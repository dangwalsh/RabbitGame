//
//  rabbit.h
//  RabbitGame
//
//  Created by Daniel Walsh on 11/13/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#ifndef RABBITH
#define RABBITH
#include "terminal.h"

class rabbit {
	const terminal const *t;
	unsigned x, y;
	char c;
    //rabbit(const rabbit& another);
public:
	rabbit(const terminal& initial_t, unsigned initial_x, unsigned initial_y);
    ~rabbit();
	bool move();
};
#endif
