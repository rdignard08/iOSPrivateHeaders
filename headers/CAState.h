
@protocol NSCoding, NSCopying;
@interface CAState : NSObject <NSCoding, NSCopying> {

    NSString _name;
    NSString _basedOn;
    NSMutableArray _elements;
    double _nextDelay;
    double _previousDelay;
    BOOL _enabled;
    BOOL _locked;
    BOOL _initial;
}
@property (nonatomic, copy, readwrite) NSString* name;
@property (atomic, copy, readwrite) NSString* basedOn;
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (nonatomic, copy, readwrite) NSArray* elements;
@property (atomic, assign, readwrite) NSNumber* nextDelay;
@property (atomic, assign, readwrite) NSNumber* previousDelay;
@property (nonatomic, assign, readwrite, getter=isLocked) NSNumber* locked;
@property (atomic, assign, readwrite, getter=isInitial) NSNumber* initial;
 + (void) CAMLParserStartElement:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) name;
 - (BOOL) isLocked;
 - (void) setLocked:(BOOL)a;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setName:(id)a;
 - (id) basedOn;
 - (void) foreachLayer:(@?)a;
 - (void) setElements:(id)a;
 - (id) elements;
 - (void) addElement:(id)a;
 - (void) removeElement:(id)a;
 - (void) CAMLParser:(id)asetValue:(id)bforKey:(id)c;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLTypeForKey:(id)a;
 - (void) setBasedOn:(id)a;
 - (double) nextDelay;
 - (void) setNextDelay:(double)a;
 - (double) previousDelay;
 - (void) setPreviousDelay:(double)a;
 - (BOOL) isInitial;
 - (void) setInitial:(BOOL)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
