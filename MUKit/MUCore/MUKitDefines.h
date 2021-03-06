//
//  MUKitDefines.h
//  MUKit
//
//  Created by Malaar on 9/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//


#define MU_NULL_PROTECT(value) ( ((NSNull*)value == [NSNull null]) ? (nil) : (value) )
#define MU_NILL_PROTECT(value) ( (nil == value) ? ((NSObject*)[NSNull null]) : ((NSObject*)value) )

#define MU_IS_IPAD [[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad

#define MU_CHECK_INDEX(index, min, max) {NSAssert( index >= min && index < max, @"Wrong index!");}

#define MU_IS_RETINA [UIScreen mainScreen].scale > 1.5f

#ifdef DEBUG
#   define MULog(format, ...) NSLog(format, __VA_ARGS__)
#else
#   define MULog(format, ...)
#endif

