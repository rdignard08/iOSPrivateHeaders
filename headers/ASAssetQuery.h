
@interface ASAssetQuery : NSObject {

    BOOL _queriesLocalAssetInformationOnly;
    NSPredicate* _predicate;
    NSArray* _results;
    double _networkTimeout;
    NSString* _assetType;
}
@property (nonatomic, retain, readwrite) NSPredicate* predicate;
@property (nonatomic, assign, readwrite) NSNumber* queriesLocalAssetInformationOnly;
@property (nonatomic, retain, readwrite) NSArray* results;
@property (nonatomic, assign, readwrite) NSNumber* networkTimeout;
@property (nonatomic, copy, readwrite) NSString* assetType;
 + (id) queryPredicateForProperties:(id)a;

 - (void) setPredicate:(id)a;
 - (void) dealloc;
 - (void) stopQuery;
 - (id) results;
 - (id) predicate;
 - (id) assetType;
 - (void) setResults:(id)a;
 - (BOOL) queriesLocalAssetInformationOnly;
 - (double) networkTimeout;
 - (void) setNetworkTimeout:(double)a;
 - (void) setAssetType:(id)a;
 - (void) startQuery:(@?)a;
 - (id) initWithAssetType:(id)a;
 - (void) setQueriesLocalAssetInformationOnly:(BOOL)a;
 - (id) runQueryAndReturnError:(^@)a;


@end
