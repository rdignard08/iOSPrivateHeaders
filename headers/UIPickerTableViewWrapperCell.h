
@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

    @"UIView" _wrappedView;
    @"UIView" _wrappedViewContainer;
    {CGSize="width"d"height"d} _wrappedViewSize;
}

 - (void) dealloc;
 - (id) wrappedView;
 - (id) initWithStyle:(q)areuseIdentifier:(id)b;
 - (void) setWrappedView:(id)a;
 - (void) resizeSubviewsWithOldSize:({CGSize=dd})a;
 - (void) prepareForReuse;
 - (void) _setIsCenterCell:(BOOL)ashouldModifyAlphaOfView:(BOOL)b;
 - (void) _updateWrappedViewFrame;
 - (void) _updateWrappedView;
 - (id) _anyDateLabel;


@end
