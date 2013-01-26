//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Maxwell Stanford on 1/25/13.
//  Copyright (c) 2013 Andrew Wirth. All rights reserved.
//

#import <Foundation/Foundation.h>


@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;

- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
