
@interface _UIDynamicAnimationActiveValue : NSObject {

    double _value;
    double _minimumActiveValue;
    double _maximumActiveValue;
    int _type;
    double _boundaryPull;
    id _applier;
    b1 _lowerBoundary;
    b1 _upperBoundary;
}
@property (nonatomic, assign, readwrite) NSNumber* value;
@property (nonatomic, assign, readwrite) NSNumber* minimumActiveValue;
@property (nonatomic, assign, readwrite) NSNumber* maximumActiveValue;
@property (nonatomic, assign, readwrite) NSNumber* type;
 + (id) activeValue:(double)aofType:(int)b;
 + (id) lowerBoundary:(double)aofType:(int)b;
 + (id) upperBoundary:(double)aofType:(int)b;

 - (id) description;
 - (void) dealloc;
 - (void) setType:(int)a;
 - (@?) _applier;
 - (void) _setBoundaryPull:(double)a;
 - (BOOL) _isLowerBoundary;
 - (BOOL) _isUpperBoundary;
 - (double) minimumActiveValue;
 - (double) maximumActiveValue;
 - (void) setMinimumActiveValue:(double)a;
 - (void) setMaximumActiveValue:(double)a;
 - (double) _boundaryPull;
 - (id) init;
 - (int) type;
 - (void) setValue:(double)a;
 - (double) value;
 - (void) _appendDescriptionToString:(id)aatLevel:(int)b;


@end
