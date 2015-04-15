
@protocol NSCopying, NSCoding;
@interface UILocalNotification : NSObject <NSCopying, NSCoding> {

}
@property (nonatomic, copy, readwrite) NSDate* fireDate;
@property (nonatomic, copy, readwrite) NSTimeZone* timeZone;
@property (nonatomic, assign, readwrite) NSNumber* repeatInterval;
@property (nonatomic, copy, readwrite) NSCalendar* repeatCalendar;
@property (nonatomic, copy, readwrite) NSNumber* region;
@property (nonatomic, assign, readwrite) NSNumber* regionTriggersOnce;
@property (nonatomic, copy, readwrite) NSString* alertBody;
@property (nonatomic, assign, readwrite) NSNumber* hasAction;
@property (nonatomic, copy, readwrite) NSString* alertAction;
@property (nonatomic, copy, readwrite) NSString* alertLaunchImage;
@property (nonatomic, copy, readwrite) NSString* alertTitle;
@property (nonatomic, copy, readwrite) NSString* soundName;
@property (nonatomic, assign, readwrite) NSNumber* applicationIconBadgeNumber;
@property (nonatomic, copy, readwrite) NSDictionary* userInfo;
@property (nonatomic, copy, readwrite) NSString* category;
@property (nonatomic, assign, readwrite) NSNumber* totalRepeatCount;
@property (nonatomic, assign, readwrite) NSNumber* remainingRepeatCount;
@property (nonatomic, assign, readwrite) NSNumber* hideAlertTitle;
@property (nonatomic, assign, readwrite) NSNumber* allowSnooze;
@property (nonatomic, assign, readwrite) NSNumber* soundType;
@property (nonatomic, assign, readwrite) NSNumber* interruptAudioAndLockDevice;
@property (nonatomic, assign, readwrite) NSNumber* resumeApplicationInBackground;
@property (nonatomic, assign, readwrite) NSNumber* fireNotificationsWhenAppRunning;
@property (nonatomic, assign, readwrite) NSNumber* showAlarmStatusBarItem;
@property (nonatomic, copy, readwrite) NSString* customLockSliderLabel;
@property (nonatomic, copy, readwrite) NSString* firedNotificationName;
@property (nonatomic, copy, readwrite) NSString* snoozedNotificationName;
@property (nonatomic, assign, readwrite) NSNumber* isTransient;
 + (id) alloc;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (BOOL) isValid;
 - (void) validate;
 - (id) nextFireDateForLastFireDate:(id)a ;
 - (BOOL) isTriggeredByDate;
 - (id) nextFireDateAfterDate:(id)a localTimeZone:(id)b ;
 - (long long) compareFireDates:(id)a ;
 - (void) clearNonSystemProperties;
 - (BOOL) isTriggeredByRegion;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
