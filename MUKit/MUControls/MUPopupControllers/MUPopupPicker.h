//
//  MUPopupPicker.h
//  MUKit
//
//  Created by Malaar on 9/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MUPopupView.h"


#define POPUPVIEW_TOOLBAR_ITEM_DID_PRESSED      @"MUPopupViewToolbarItemDidPressed"

#define POPUPVIEW_TOOLBAR_ITEM_PRESSED_INDEX    @"MUPopupViewToolbarItemPressedIndex"


@interface MUPopupPicker : MUPopupView
{
@protected
    UIToolbar *toolbar;
    UIView *picker;

    NSObject *selectedItem;
}

@property(nonatomic, retain) UIToolbar *toolbar;
@property(nonatomic, retain) NSObject *selectedItem;

- (UIView *)createPicker;

@end
