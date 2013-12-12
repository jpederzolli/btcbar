//
//  CoinbaseUSDFetcher.h
//  btcbar
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"

@interface CoinbaseUSDFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSMutableData *responseData;

- (void)requestUpdate;

@end
