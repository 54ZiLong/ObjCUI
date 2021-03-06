//
// Created by freedom on 2020/6/19.
//

#import <Foundation/Foundation.h>

typedef NSString *OCUITableViewDropDelegateKey NS_EXTENSIBLE_STRING_ENUM;

static const OCUITableViewDropDelegateKey OCUITableViewDropDelegatePerformDropWithCoordinatorKey = @"OCUITableViewDropDelegatePerformDropWithCoordinatorKey";
static const OCUITableViewDropDelegateKey OCUITableViewDropDelegatePerformCanHandleDropSessionKey = @"OCUITableViewDropDelegatePerformCanHandleDropSessionKey";
static const OCUITableViewDropDelegateKey OCUITableViewDropDelegatePerformDropSessionDidEnterKey = @"OCUITableViewDropDelegatePerformDropSessionDidEnterKey";
static const OCUITableViewDropDelegateKey OCUITableViewDropDelegatePerformDropSessionDidUpdateWithDestinationIndexPathKey = @"OCUITableViewDropDelegatePerformDropSessionDidUpdateWithDestinationIndexPathKey";
static const OCUITableViewDropDelegateKey OCUITableViewDropDelegateDropSessionDidExitKey = @"OCUITableViewDropDelegateDropSessionDidExitKey";
static const OCUITableViewDropDelegateKey OCUITableViewDropDelegateDropSessionDidEndKey = @"OCUITableViewDropDelegateDropSessionDidEndKey";
static const OCUITableViewDropDelegateKey OCUITableViewDropDelegateDropPreviewParametersForRowAtIndexPathKey = @"OCUITableViewDropDelegateDropPreviewParametersForRowAtIndexPathKey";

@interface OCUITableViewDropDelegateWrapper : NSObject <UITableViewDropDelegate>

@property(nonatomic, strong, readonly) NSMutableDictionary <NSString *, id> *delegateMap;

@end