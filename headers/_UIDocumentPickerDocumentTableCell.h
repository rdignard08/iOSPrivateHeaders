
@interface _UIDocumentPickerDocumentTableCell : UITableViewCell {

    _UIDocumentPickerDocumentTableViewController* _weak_tableView;
    BOOL _isContainer;
    UIImageView* _iconView;
    UILabel* _titleLabel;
    UILabel* _subtitleLabel;
    _UIDocumentPickerContainerItem* _item;
    SKUIItemOfferButton* _cloudButton;
    NSTimer* _progressTimer;
    id _progressSubscriber;
    UIView* _iconCenteringView;
}
 + ({CGSize=dd}) thumbnailSize;
 + (double) estimatedHeight;

 - (void) setItem:(id)a;
 - (id) item;
 - (void) dealloc;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)b;
 - (id) titleLabel;
 - (void) setTableView:(id)a;
 - (void) prepareForReuse;
 - (id) subtitleLabel;
 - (id) tableView;
 - (void) setTitleLabel:(id)a;
 - (void) setSubtitleLabel:(id)a;
 - (void) reloadItem:(BOOL)a;
 - (id) iconView;
 - (id) progressSubscriber;
 - (void) setProgressTimer:(id)a;
 - (void) setCloudButton:(id)a;
 - (void) setProgressSubscriber:(id)a;
 - (id) cloudButton;
 - (void) updateForDownloadStatus;
 - (void) updateProgress:(id)a;
 - (void) startDownload:(id)a;
 - (void) setIconView:(id)a;
 - (BOOL) isContainer;
 - (void) setIsContainer:(BOOL)a;
 - (id) progressTimer;
 - (id) iconCenteringView;
 - (void) setIconCenteringView:(id)a;


@end
