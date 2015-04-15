
@protocol UICollectionViewDataSource, UICollectionViewDelegate;
@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

    UICollectionView* _collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout* _flowLayout;
    UITableView* _table;
}

 - (void) reloadData;
 - (void) layoutSubviews;
 - (long long) collectionView:(id)a numberOfItemsInSection:(long long)b ;
 - (id) collectionView:(id)a cellForItemAtIndexPath:(id)b ;
 - (id) collectionView:(id)a viewForSupplementaryElementOfKind:(id)b atIndexPath:(id)c ;
 - (id) initWithTable:(id)a ;
 - (void) _invalidateTable;
 - (BOOL) canBecomeFirstResponder;
 - (void) _cellTapped:(id)a ;
 - (void) _doneTapped;
 - (void) _setIndexColor:(id)a ;


@end
