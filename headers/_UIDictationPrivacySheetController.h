
@interface _UIDictationPrivacySheetController : UINavigationController {

    @? _dismissHandler;
}
 + (id) controllerWithDismissHandler:(@?)a;

 - (void) dismiss;
 - (id) initWithHandler:(@?)a;
 - (void) setDismissHandler:(@?)a;
 - (@?) dismissHandler;


@end
