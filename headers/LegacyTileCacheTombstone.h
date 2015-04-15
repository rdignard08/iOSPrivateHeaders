
@interface LegacyTileCacheTombstone : NSObject {

    BOOL dead;
}
@property (atomic, assign, readwrite, getter=isDead) NSNumber* dead;

 - (BOOL) isDead;
 - (void) setDead:(BOOL)a ;


@end
