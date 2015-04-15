
@interface UITextInputArrowKeyHistory : NSObject {

    @"UITextPosition" startPosition;
    long long amount;
    int anchor;
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
 - (int) anchor;
 - (void) setAnchor:(int)a;
 - (BOOL) affinityDownstream;
 - (void) setCursor:(id)a;
 - (void) setAffinityDownstream:(BOOL)a;
 - (void) setAmount:(long long)a;
 - (long long) amount;
 - (id) start;
 - (id) startPosition;


@end
