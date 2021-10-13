#ifndef lwip_h
#define lwip_h

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

#import "lwip/init.h"
#import "lwip/pbuf.h"
#import "lwip/tcp.h"
#import "lwip/timeouts.h"
#import "compat.h"

//! Project version number for lwip.
FOUNDATION_EXPORT double lwipVersionNumber;

//! Project version string for lwip.
FOUNDATION_EXPORT const unsigned char lwipVersionString[];



#endif /* lwip_h */
