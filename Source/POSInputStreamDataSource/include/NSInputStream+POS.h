//
//  NSInputStream+POS.h
//  POSBlobInputStreamLibrary
//
//  Created by Pavel Osipov on 17.07.13.
//  Copyright (c) 2013 Pavel Osipov. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSInputStream (POS)

+ (NSInputStream *)pos_inputStreamWithAssetURL:(NSURL *)assetURL;
+ (NSInputStream *)pos_inputStreamWithAssetURL:(NSURL *)assetURL asynchronous:(BOOL)asynchronous;

+ (NSInputStream *)pos_inputStreamForCFNetworkWithAssetURL:(NSURL *)assetURL;
+ (NSInputStream *)pos_inputStreamForAFNetworkingWithAssetURL:(NSURL *)assetURL;

@end

NS_ASSUME_NONNULL_END
