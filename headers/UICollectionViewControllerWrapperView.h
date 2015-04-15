
@interface UICollectionViewControllerWrapperView : UIView {

}

 - (id) preferredFocusedItem;
 - (id) _viewControllerToNotifyOnLayoutSubviews;
 - (void) didMoveToSuperview;
 - (id) _collectionViewController;


@end
