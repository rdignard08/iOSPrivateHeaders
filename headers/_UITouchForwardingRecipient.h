
@interface _UITouchForwardingRecipient : NSObject {

    UIResponder* fromResponder;
    UIResponder* responder;
    long long recordedPhase;
    long long autocompletedPhase;
}
@property (nonatomic, assign, readwrite) UIResponder* fromResponder;
@property (nonatomic, assign, readwrite) UIResponder* responder;
@property (nonatomic, assign, readwrite) NSNumber* recordedPhase;
@property (nonatomic, assign, readwrite) NSNumber* autocompletedPhase;

 - (id) description;
 - (void) setResponder:(id)a ;
 - (id) responder;
 - (long long) recordedPhase;
 - (long long) autocompletedPhase;
 - (void) setRecordedPhase:(long long)a ;
 - (void) setAutocompletedPhase:(long long)a ;
 - (id) initWithResponder:(id)a fromResponder:(id)b ;
 - (id) fromResponder;
 - (void) setFromResponder:(id)a ;


@end
