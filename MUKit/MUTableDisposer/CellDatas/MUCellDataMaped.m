//
//  MUCellDataMaped.m
//  MUKit
//
//  Created by Yuriy Bosov on 3/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "MUCellDataMaped.h"

@implementation MUCellDataMaped


@synthesize key;
@synthesize object;


- (id) init
{
    NSAssert(NO, @"You can't use this method! Instead use 'initWithObject:key:'");
    [self release];
    return nil;
}


- (id) initWithObject:(NSObject *)aObject key:(NSString *)aKey
{
    self = [super init];
    if (self)
    {
        key = [aKey retain];
        object = aObject;
    }
    return self;
}


- (void) dealloc
{
    [key release];
    [super dealloc];
}


- (void) mapFromObject
{
    NSAssert(nil, @"Override this method in subclasses!");
}


- (void) mapToObject
{
    NSAssert(nil, @"Override this method in subclasses!");
}

@end
