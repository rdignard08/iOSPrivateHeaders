
@interface FBSSceneContext : NSObject {

    I _identifier;
    d _level;
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
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDelegate:(id)a;
 - (id) delegate;
 - (I) identifier;
 - (d) level;
 - (void) setLevel:(d)a;
 - (id) initWithCAContext:(id)a;
 - (id) initWithIdentifier:(I)alevel:(d)b;
 - (id) CAContext;


@end
