/* Generated by RuntimeBrowser.
 */

@protocol RUITableViewDelegate

@required

- (BOOL)tableViewOM:(RUITableView *)arg1 deleteRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableViewOMDidChange:(RUITableView *)arg1;
- (void)tableViewOMSubmitForm:(RUITableView *)arg1;

@optional

- (void)tableViewOM:(RUITableView *)arg1 elementDidChange:(RUIElement *)arg2;
- (void)tableViewOM:(RUITableView *)arg1 pressedButton:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)tableViewOM:(RUITableView *)arg1 pressedLink:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)tableViewOM:(void *)arg1 pressedLink:(void *)arg2 attributes:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: RUITableView *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end