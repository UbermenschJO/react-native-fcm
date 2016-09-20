
#import <UIKit/UIKit.h>

@import FirebaseInstanceID;
@import FirebaseMessaging;

#import "RCTBridgeModule.h"


extern NSString *const FCMNotificationReceived;
extern NSString *const FCMLocalNotificationReceived;

@interface RNFIRMessaging : NSObject <RCTBridgeModule>

@property (nonatomic, assign) bool connectedToFCM;

@end
