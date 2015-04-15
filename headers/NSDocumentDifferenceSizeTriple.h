
@interface NSDocumentDifferenceSizeTriple : NSObject {

    NSDocumentDifferenceSize _dueToRecentChangesBeforeSaving;
    NSDocumentDifferenceSize _betweenPreservingPreviousVersionAndSaving;
    NSDocumentDifferenceSize _betweenPreviousSavingAndSaving;
}
@property (nonatomic, assign, readonly) NSDocumentDifferenceSize* dueToRecentChangesBeforeSaving;
@property (nonatomic, assign, readonly) NSDocumentDifferenceSize* betweenPreservingPreviousVersionAndSaving;
@property (nonatomic, assign, readonly) NSDocumentDifferenceSize* betweenPreviousSavingAndSaving;

 - (id) description;
 - (void) dealloc;
 - (id) dueToRecentChangesBeforeSaving;
 - (id) betweenPreservingPreviousVersionAndSaving;
 - (id) betweenPreviousSavingAndSaving;
 - (id) init;


@end
