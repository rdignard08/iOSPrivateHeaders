
@interface _UIActivityGroupActivityCell : UICollectionViewCell {

    @"UILabel" _titleLabel;
    @"UIImageView" _imageView;
    @"UIImageView" _highlightedImageView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setHighlighted:(BOOL)a;
 - (id) titleLabel;
 - (void) prepareForReuse;
 - (id) imageView;
 - (void) setTitleLabel:(id)a;
 - (void) setImageView:(id)a;
 - (void) setHighlightedImageView:(id)a;
 - (id) highlightedImageView;
 - (void) updateHighlightedImageViewIfNeeded;
 - (void) initHighlightedImageViewIfNeeded;
 - (id) draggingView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
