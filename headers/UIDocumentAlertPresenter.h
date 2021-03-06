
@protocol UIAlertViewDelegate;
@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {

    @? _completionHandler;
    NSError* _error;
    UIAlertView* _alert;
}
 + (id) _presentAlertWithError:(id)acompletionHandler:(@?)b;

 - (void) dealloc;
 - (void) alertView:(id)a clickedButtonAtIndex:(long long)b ;
 - (void) alertViewCancel:(id)a ;
 - (id) initWithError:(id)a completionHandler:(@?)b ;
 - (void) _forceFinishNow;


@end
