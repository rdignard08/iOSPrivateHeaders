
@interface _UITouchForwardingRecipient : NSObject {

    @"UIResponder" fromResponder;
    @"UIResponder" responder;
    q recordedPhase;
    q autocompletedPhase;
}
@property (nonatomic, assign, readwrite) UIResponder* fromResponder;
@property (nonatomic, assign, readwrite) UIResponder* responder;
@property (nonatomic, assign, readwrite) NSNumber* recordedPhase;
@property (nonatomic, assign, readwrite) NSNumber* autocompletedPhase;

 - (id) description;
 - (void) setResponder:(id)a;
 - (id) responder;
 - (q) recordedPhase;
 - (q) autocompletedPhase;
 - (void) setRecordedPhase:(q)a;
 - (void) setAutocompletedPhase:(q)a;
 - (id) initWithResponder:(id)afromResponder:(id)b;
 - (id) fromResponder;
 - (void) setFromResponder:(id)a;


@end
