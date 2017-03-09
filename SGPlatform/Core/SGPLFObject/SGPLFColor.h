//
//  SGPLFColor.h
//  SGPlatform
//
//  Created by Single on 2017/2/24.
//  Copyright © 2017年 single. All rights reserved.
//

#import "SGPLFTargets.h"

#if SGPLATFORM_TARGET_OS_MAC


#import <Cocoa/Cocoa.h>

typedef NSColor SGPLFColor;


#elif SGPLATFORM_TARGET_OS_IPHONE_OR_TV


#import <UIKit/UIKit.h>

typedef UIColor SGPLFColor;


#endif