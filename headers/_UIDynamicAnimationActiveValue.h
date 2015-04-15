
@interface _UIDynamicAnimationActiveValue : NSObject {

    d _value;
    d _minimumActiveValue;
    d _maximumActiveValue;
    i _type;
    d _boundaryPull;
    id _applier;
    b1 _lowerBoundary;
    b1 _upperBoundary;
}
@property (nonatomic, assign, readwrite) NSNumber* value;
@property (nonatomic, assign, readwrite) NSNumber* minimumActiveValue;
@property (nonatomic, assign, readwrite) NSNumber* maximumActiveValue;
@property (nonatomic, assign, readwrite) NSNumber* type;
 + (id) activeValue:(d)aofType:(i)b;
 + (id) lowerBoundary:(d)aofType:(i)b;
 + (id) upperBoundary:(d)aofType:(i)b;

 - (id) description;
 - (void) dealloc;
 - (void) setType:(i)a;
 - (@?) _applier;
 - (void) _setBoundaryPull:(d)a;
 - (BOOL) _isLowerBoundary;
 - (BOOL) _isUpperBoundary;
 - (d) minimumActiveValue;
 - (d) maximumActiveValue;
 - (void) setMinimumActiveValue:(d)a;
 - (void) setMaximumActiveValue:(d)a;
 - (d) _boundaryPull;
 - (id) init;
 - (i) type;
 - (void) setValue:(d)a;
 - (d) value;
 - (void) _appendDescriptionToString:(id)aatLevel:(i)b;


@end
