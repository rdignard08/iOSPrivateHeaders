
@interface FBSSceneContext : NSObject {

    unsigned int _identifier;
    double _level;
    @"CAContext" _context;
    @"<FBSSceneContextDelegate>" _delegate;
    BOOL _shouldObserveContext;
}
@property (nonatomic, retain, readonly) CAContext* CAContext;
@property (nonatomic, assign, readonly) NSNumber* identifier;
@property (nonatomic, assign, readwrite) NSNumber* level;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
 + (id) contextWithCAContext:(id)a;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (unsigned int) identifier;
 - (double) level;
 - (void) setLevel:(double)a;
 - (id) initWithCAContext:(id)a;
 - (id) initWithIdentifier:(unsigned int)alevel:(double)b;
 - (id) CAContext;


@end
