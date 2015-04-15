
@interface _IntArray2D : NSObject {

    ^q _arrayData;
    unsigned long long _iSize;
    unsigned long long _jSize;
    BOOL _shouldBoundsCheck;
}
@property (nonatomic, assign, readonly) NSNumber* iSize;
@property (nonatomic, assign, readonly) NSNumber* jSize;
@property (nonatomic, assign, readwrite) NSNumber* shouldBoundsCheck;
 + (id) arrayWithISize:(unsigned long long)ajSize:(unsigned long long)b;

 - (id) description;
 - (void) dealloc;
 - (id) initWithISize:(unsigned long long)ajSize:(unsigned long long)b;
 - (long long) ;
 - (BOOL) inBoundsForIIndex:(unsigned long long)ajIndex:(unsigned long long)b;
 - (void) assertBoundsForIIndex:(unsigned long long)ajIndex:(unsigned long long)b;
 - (long long) outOfBoundsReturnValue:(unsigned long long)a;
 - (void) newValue:(unsigned long long)a;
 - (unsigned long long) iSize;
 - (unsigned long long) jSize;
 - (BOOL) shouldBoundsCheck;
 - (void) setShouldBoundsCheck:(BOOL)a;


@end
