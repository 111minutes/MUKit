//
//  MUHelper.h
//  Pro-Otdyh
//
//  Created by Malaar on 24.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MUCocoaExtentions.h"

inline UIViewController* MUGetPrimeViewController();

inline void MUShowSimpleAlert(NSString* aTitle, NSString* aMessage);

typedef BOOL (^MUDividedComparator)(id anObj1, id anObj2);
inline NSMutableArray* MUDivideArray(NSArray* aDividedArray, NSString* aFieldName, BOOL anAscending, MUDividedComparator aComparator);

NSDate* MUDateFromTimeStampInDictionary(NSDictionary* aDictionary, NSString* aKey);

inline NSString* MUGenerateUUID();
inline NSString* MUDocumentDirecoryPath();

inline void MUHideWebViewShadows(UIWebView* webView);
