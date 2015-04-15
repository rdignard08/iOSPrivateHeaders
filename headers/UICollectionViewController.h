
@protocol UICollectionViewDelegate, UICollectionViewDataSource;
@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

    UICollectionViewLayout* _layout;
    UICollectionView* _collectionView;
    {?="clearsSelectionOnViewWillAppear"b1"useLayoutToLayoutNavigationTransitions"b1} _collectionViewControllerFlags;
}

 - (void) dealloc;
 - (id) collectionViewLayout;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (void) setView:(id)a ;
 - (id) preferredFocusedItem;
 - (id) collectionView;
 - (void) loadView;
 - (id) contentScrollView;
 - (void) viewWillUnload;
 - (void) __viewWillAppear:(BOOL)a ;
 - (id) _animatorForOperation:(long long)a fromViewController:(id)b toViewController:(id)c ;
 - (BOOL) useLayoutToLayoutNavigationTransitions;
 - (id) _uiCollectionView;
 - (void) _clearSharedView;
 - (void) _setSharedCollectionView:(id)a ;
 - (void) _setUseLayoutToLayoutNavigationTransitions:(BOOL)a withCheck:(BOOL)b ;
 - (void) setClearsSelectionOnViewWillAppear:(BOOL)a ;
 - (BOOL) clearsSelectionOnViewWillAppear;
 - (id) initWithCollectionViewLayout:(id)a ;
 - (id) _wrappingView;
 - (id) _newCollectionViewWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a collectionViewLayout:(id)b ;
 - (void) setCollectionView:(id)a ;
 - (BOOL) shouldCrossFadeNavigationBar;
 - (BOOL) shouldCrossFadeBottomBars;
 - (void) setUseLayoutToLayoutNavigationTransitions:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) dataSource;


@end
