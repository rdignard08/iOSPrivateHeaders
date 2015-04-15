
@interface UIPrintInfoRequest : NSObject {

    @"PKPrinter" _printer;
    i _requestState;
    @? _completionHandler;
}
@property (nonatomic, assign, readwrite) NSNumber* requestState;
@property (nonatomic, copy, readwrite) NSNumber* completionHandler;
 + (id) requestInfoForPrinter:(id)a;

 - (void) dealloc;
 - (@?) completionHandler;
 - (void) requestPrintInfo;
 - (i) requestState;
 - (void) setRequestState:(i)a;
 - (void) setCompletionHandler:(@?)a;


@end
