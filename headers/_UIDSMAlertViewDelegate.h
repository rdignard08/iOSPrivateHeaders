
@protocol UIAlertViewDelegate;
@interface _UIDSMAlertViewDelegate : NSObject <UIAlertViewDelegate> {

    @? _completionHandler;
}
@property (atomic, copy, readwrite) NSNumber* completionHandler;

 - (void) alertView:(id)a didDismissWithButtonIndex:(long long)b ;
 - (@?) completionHandler;
 - (void) willPresentAlertView:(id)a ;
 - (void) setCompletionHandler:(@?)a ;


@end
