
@interface NSDocumentDifferenceSize : NSObject {

    q _generationCount;
    q _changeCount;
}
@property (nonatomic, assign, readwrite) NSNumber* generationCount;
@property (nonatomic, assign, readwrite) NSNumber* changeCount;

 - (q) changeCount;
 - (id) description;
 - (q) generationCount;
 - (void) setGenerationCount:(q)a;
 - (void) setChangeCount:(q)a;


@end
