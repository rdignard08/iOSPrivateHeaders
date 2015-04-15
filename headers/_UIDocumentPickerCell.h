
@interface _UIDocumentPickerCell : UICollectionViewCell {

    UILabel _titleLabel;
    UILabel _subtitleLabel;
    UILabel _subtitle2Label;
    UIImageView _thumbnailView;
    UIProgressView _progressView;
    UIView _thumbnailCenterView;
    NSLayoutConstraint _thumbnailCenterWidthConstraint;
    NSLayoutConstraint _thumbnailCenterHeightConstraint;
    UILongPressGestureRecognizer _pickableDiagnosticGestureRecognizer;
}
 + ({CGSize=dd}) thumbnailSizeForTraits:(id)a;
 + ({CGSize=dd}) defaultSizeForTraits:(id)a;
 + (id) folderIconForTraits:(id)a;

 - (void) dealloc;
 - (void) traitCollectionDidChange:(id)a;
 - (id) titleLabel;
 - (void) prepareForReuse;
 - (id) subtitleLabel;
 - (void) _showPickableDiagnostic;
 - (void) setPickableDiagnosticGestureRecognizer:(id)a;
 - (id) pickableDiagnosticGestureRecognizer;
 - (void) setTitleLabel:(id)a;
 - (void) setSubtitleLabel:(id)a;
 - (void) setSubtitle2Label:(id)a;
 - (id) subtitle2Label;
 - (void) setThumbnailCenterView:(id)a;
 - (void) setThumbnailView:(id)a;
 - (id) thumbnailView;
 - (void) setProgressView:(id)a;
 - (id) progressView;
 - (id) thumbnailCenterView;
 - (void) setThumbnailCenterHeightConstraint:(id)a;
 - (void) setThumbnailCenterWidthConstraint:(id)a;
 - (id) thumbnailCenterHeightConstraint;
 - (id) thumbnailCenterWidthConstraint;
 - (id) viewControllerForDisplay;
 - (void) reloadItem:(BOOL)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
