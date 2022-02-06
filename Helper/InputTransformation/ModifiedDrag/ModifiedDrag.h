//
// --------------------------------------------------------------------------
// ModifyingActions.h
// Created for Mac Mouse Fix (https://github.com/noah-nuebling/mac-mouse-fix)
// Created by Noah Nuebling in 2020
// Licensed under MIT
// --------------------------------------------------------------------------
//

#import "Device.h"
#import <CoreGraphics/CoreGraphics.h>
//#import <Foundation/Foundation.h>
#import "Constants.h"

NS_ASSUME_NONNULL_BEGIN

/// Plugin Declaration

@protocol ModifiedDragOutputPlugin <NSObject>

+ (void)initializeDragWithModifiedDragDict:(NSDictionary *)dict;
+ (void)handleMouseInputWhileInitialized;
+ (void)handleMouseInputWhileInUseWithDeltaX:(double)deltaX;
+ (void)handleDeactivationWhileInUseWithCancel:(BOOL)cancelation;

@end

/// Modified Drag Declaration

@interface ModifiedDrag : NSObject

typedef enum {
    kMFModifiedInputActivationStateNone,
    kMFModifiedInputActivationStateInitialized,
    kMFModifiedInputActivationStateInUse,
} MFModifiedInputActivationState;

+ (void)load_Manual;

+ (NSDictionary *)dict;
+ (void)initializeDragWithModifiedDragDict:(NSDictionary *)dict onDevice:(Device *)dev largeUsageThreshold:(BOOL)largeUsageThreshold;

+ (void)modifiedScrollHasBeenUsed;
//+ (void)suspend;
+ (void)deactivate;
+ (void)deactivateWithCancel:(BOOL)cancel;

+ (void)handleMouseInputWithDeltaX:(int64_t)deltaX deltaY:(int64_t)deltaY event:(CGEventRef _Nullable)event;
@end

NS_ASSUME_NONNULL_END
