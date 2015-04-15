
@interface UIPrintInfoRequest : NSObject {

    PKPrinter* _printer;
    int _requestState;
    @? _completionHandler;
}
@property (nonatomic, assign, readwrite) NSNumber* requestState;
@property (nonatomic, copy, readwrite) NSNumber* completionHandler;
 + (id) requestInfoForPrinter:(id)a;

 - (void) dealloc;
 - (@?) completionHandler;
 - (void) requestPrintInfo;
 - (int) requestState;
 - (void) setRequestState:(int)a ;
 - (void) setCompletionHandler:(@?)a ;


@end
