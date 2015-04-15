
@interface UIRemoteSheetInfo : NSObject {

    UIView* _sheetView;
    UISpringBoardHostedView* _remoteView;
    id _delegate;
    SEL _selector;
    ^v _context;
    long long _returnCode;
}
@property (nonatomic, retain, readwrite) UIView* sheetView;
@property (nonatomic, retain, readwrite) UISpringBoardHostedView* remoteView;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) NSNumber* selector;
@property (nonatomic, assign, readwrite) NSNumber* context;
@property (nonatomic, assign, readwrite) NSNumber* returnCode;

 - (SEL) selector;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) setSheetView:(id)a ;
 - (void) setRemoteView:(id)a ;
 - (id) sheetView;
 - (void) setReturnCode:(long long)a ;
 - (id) remoteView;
 - (long long) returnCode;
 - (id) delegate;
 - (void) setSelector:(SEL)a ;
 - (void) setContext:(^v)a ;
 - (^v) context;


@end
