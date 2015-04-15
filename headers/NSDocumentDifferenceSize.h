
@interface NSDocumentDifferenceSize : NSObject {

    long long _generationCount;
    long long _changeCount;
}
@property (nonatomic, assign, readwrite) NSNumber* generationCount;
@property (nonatomic, assign, readwrite) NSNumber* changeCount;

 - (long long) changeCount;
 - (id) description;
 - (long long) generationCount;
 - (void) setGenerationCount:(long long)a;
 - (void) setChangeCount:(long long)a;


@end
