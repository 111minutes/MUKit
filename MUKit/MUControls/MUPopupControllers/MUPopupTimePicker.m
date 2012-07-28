//
//  MUPopupTimePicker.m
//  MUKit
//
//  Created by Malaar on 9/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "MUPopupTimePicker.h"

@implementation MUPopupTimePicker

#pragma mark - override next methods to customize:

- (UIView *)createPicker
{
//    UIDatePicker* pv = [[[UIDatePicker alloc] initWithFrame:CGRectZero] autorelease];
    int width = (MU_IS_IPAD) ? (260) : (320);
    UIDatePicker *pv = [[[UIDatePicker alloc] initWithFrame:CGRectMake(0, 0, width, 216)] autorelease];
    pv.datePickerMode = UIDatePickerModeTime;

    return pv;
}

@end
