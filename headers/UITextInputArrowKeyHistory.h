
@interface UITextInputArrowKeyHistory : NSObject {

    @"UITextPosition" startPosition;
    q amount;
    i anchor;
    @"UITextPosition" start;
    @"UITextPosition" end;
    @"UITextPosition" cursor;
    BOOL affinityDownstream;
}
@property (nonatomic, retain, readwrite) UITextPosition* startPosition;
@property (nonatomic, assign, readwrite) NSNumber* anchor;
@property (nonatomic, retain, readwrite) UITextPosition* start;
@property (nonatomic, retain, readwrite) UITextPosition* end;
@property (nonatomic, retain, readwrite) UITextPosition* cursor;
@property (nonatomic, assign, readwrite) NSNumber* affinityDownstream;
@property (nonatomic, assign, readwrite) NSNumber* amount;

 - (void) dealloc;
 - (id) end;
 - (void) setStart:(id)a;
 - (void) setEnd:(id)a;
 - (void) setStartPosition:(id)a;
 - (id) cursor;
 - (i) anchor;
 - (void) setAnchor:(i)a;
 - (BOOL) affinityDownstream;
 - (void) setCursor:(id)a;
 - (void) setAffinityDownstream:(BOOL)a;
 - (void) setAmount:(q)a;
 - (q) amount;
 - (id) start;
 - (id) startPosition;


@end
