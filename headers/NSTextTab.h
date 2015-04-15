
@protocol NSCopying, NSCoding;
@interface NSTextTab : NSObject <NSCopying, NSCoding> {

    {?="alignment"b4"refCount"b24"unused"b4} _flags;
    double _location;
    id _reserved;
}
@property (atomic, assign, readonly) NSNumber* alignment;
@property (atomic, assign, readonly) NSNumber* location;
@property (atomic, assign, readonly) NSDictionary* options;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) columnTerminatorsForLocale:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) options;
 - (id) initWithTextAlignment:(long long)a location:(double)b options:(id)c ;
 - (id) initWithType:(unsigned long long)a location:(double)b ;
 - (unsigned long long) tabStopType;
 - (long long) alignment;
 - (double) location;


@end
