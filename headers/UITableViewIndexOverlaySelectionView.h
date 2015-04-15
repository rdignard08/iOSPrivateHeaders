
@protocol UICollectionViewDataSource, UICollectionViewDelegate;
@interface UITableViewIndexOverlaySelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

    @"UICollectionView" _collectionView;
    @"UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout" _flowLayout;
    @"UITableView" _table;
}

 - (void) reloadData;
 - (void) layoutSubviews;
 - (q) collectionView:(id)anumberOfItemsInSection:(q)b;
 - (id) collectionView:(id)acellForItemAtIndexPath:(id)b;
 - (id) collectionView:(id)aviewForSupplementaryElementOfKind:(id)batIndexPath:(id)c;
 - (id) initWithTable:(id)a;
 - (void) _invalidateTable;
 - (BOOL) canBecomeFirstResponder;
 - (void) _cellTapped:(id)a;
 - (void) _doneTapped;
 - (void) _setIndexColor:(id)a;


@end
