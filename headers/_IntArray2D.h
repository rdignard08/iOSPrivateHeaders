
@interface _IntArray2D : NSObject {

    ^q _arrayData;
    Q _iSize;
    Q _jSize;
    BOOL _shouldBoundsCheck;
}
@property (nonatomic, assign, readonly) NSNumber* iSize;
@property (nonatomic, assign, readonly) NSNumber* jSize;
@property (nonatomic, assign, readwrite) NSNumber* shouldBoundsCheck;
 + (id) arrayWithISize:(Q)ajSize:(Q)b;

 - (id) description;
 - (void) dealloc;
 - (id) initWithISize:(Q)ajSize:(Q)b;
 - (q) ;
 - (BOOL) inBoundsForIIndex:(Q)ajIndex:(Q)b;
 - (void) assertBoundsForIIndex:(Q)ajIndex:(Q)b;
 - (q) outOfBoundsReturnValue:(Q)a;
 - (void) newValue:(Q)a;
 - (Q) iSize;
 - (Q) jSize;
 - (BOOL) shouldBoundsCheck;
 - (void) setShouldBoundsCheck:(BOOL)a;


@end
