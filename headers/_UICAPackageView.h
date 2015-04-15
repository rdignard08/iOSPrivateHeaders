
@interface _UICAPackageView : UIView {

    CAPackage _package;
    NSArray _rootViews;
}
 + (BOOL) _shouldCatchDecodingExceptions;
 + (id) _buildViewHierarchyFrom:(id)apublishedObjectViewClassMap:(id)binto:(id)c;
 + (void) loadPackageViewWithObject:(id)apublishedObjectViewClassMap:(id)bcompletion:(@?)c;
 + (void) loadPackageViewWithData:(id)apublishedObjectViewClassMap:(id)bcompletion:(@?)c;
 + (void) loadPackageViewWithContentsOfURL:(id)apublishedObjectViewClassMap:(id)bcompletion:(@?)c;

 - (void) dealloc;
 - (id) initWithData:(id)apublishedObjectViewClassMap:(id)b;
 - (id) publishedObjectWithName:(id)a;
 - (id) initWithContentsOfURL:(id)apublishedObjectViewClassMap:(id)b;
 - (id) publishedViewWithName:(id)a;


@end
