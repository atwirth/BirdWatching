//
//  BirdSighting.m
//  BirdWatching
//
//  Created by Maxwell Stanford on 1/25/13.
//  Copyright (c) 2013 Andrew Wirth. All rights reserved.
//

#import "BirdSighting.h"

@implementation BirdSighting
-(id)initWithName:(NSString *)name location:(NSString *)location date:(id)date
{
    self = [super init];
    if (self) {
        _name = name;
        _location = location;
        _date = date;
        return self;
    }
    return nil;
}

@end
