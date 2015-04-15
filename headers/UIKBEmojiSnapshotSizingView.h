
@interface UIKBEmojiSnapshotSizingView : UIView {

    {CGSize="width"d"height"d} _snapshotSize;
    UIView _snapshotView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) initWithSnapshotView:(id)a;
 - (id) snapshotView;


@end
