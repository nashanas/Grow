Grow Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/growaleaf/GrowMN.svg?branch=master)](https://travis-ci.org/growaleaf/GrowMN) [![GitHub version](https://badge.fury.io/gh/grow%2Fgrow.svg)](https://badge.fury.io/gh/grow%2Fgrow) [![Snap Status](https://build.snapcraft.io/badge/grow/grow.svg)](https://build.snapcraft.io/user/grow/grow) [![GitHub issues](https://img.shields.io/github/issues/grow/grow.svg)](https://github.com/growaleaf/GrowMN/issues) [![GitHub forks](https://img.shields.io/github/forks/grow/grow.svg)](https://github.com/growaleaf/GrowMN/network) [![GitHub stars](https://img.shields.io/github/stars/grow/grow.svg)](https://github.com/growaleaf/GrowMN/stargazers) [![GitHub license](https://img.shields.io/github/license/grow/grow.svg)](https://github.com/growaleaf/GrowMN/blob/master/COPYING) [![Twitter](https://img.shields.io/twitter/url/https://github.com/growaleaf/GrowMN.svg?style=social)](https://twitter.com/intent/tweet?text=Wow:&url=http%3A%2F%2Fgithub.com%2Fgrow%2Fgrow)

Grow is a cutting edge cryptocurrency, with many features not available in most other cryptocurrencies.
- Anonymized transactions using the _Zerocoin Protocol_.
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftX_.
- Decentralized blockchain voting providing for consensus based advancement of the current Masternode
  technology used to secure the network and provide the above features, each Masternode is secured
  with a collateral of 40,000 GROW.

  
<table>
  <th colspan=2>Official links:</th>

<tr><td>Website:</td><td> https://projectgrow.tech</td></tr>
<tr><td>Explorer:</td><td> http://explorer.projectgrow.tech</td></tr>
<tr><td>White Paper:</td><td> https://projectgrow.tech/White_Paper.pdf</td></tr>
<tr><td>Discord:</td><td> https://discord.gg/pEj3fej</td></tr>
<tr><td>Twitter:</td><td> https://twitter.com/Grow_GROW</td></tr>
<tr><td>Facebook:</td><td> https://www.facebook.com/GrowGROW</td></tr>
<tr><td>Telegram:</td><td> https://t.me/grow_grow</td></tr>
<tr><td>Bitcointalk ANN:</td><td> https://bitcointalk.org/index.php?topic=2454798</td></tr>
<tr><td>Github:</td><td> https://github.com/growaleaf/GrowMN</td></tr>
<tr><td>CoinMarketCap</td><td>https://coinmarketcap.com/currencies/grow/</td></tr>
</table>

<table>
  <th colspan=2>Exchanges</th>

<tr><td>Crex24:</td><td> https://crex24.com/exchange/GROW-BTC</td></tr>
<tr><td>CryptoBridge:</td><td> https://wallet.crypto-bridge.org/market/BRIDGE.GROW_BRIDGE.BTC</td></tr>
</table>



### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
  <tr><td>Masternode Collateral</td><td>40,000 GROW</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply</td><td>50,000,000</td></tr>
<tr><td>Premine in block 1</td><td>11,500,000*</td></tr>
<tr><td>Full Premine</td><td>to handle snapshot*</td></tr>
  <tr><td>Block Time</td><td>180 seconds</td></tr>
  <tr><td>Block Minting</td><td>40 confirmations</td></tr>
  <tr><td>Block Transactions</td><td>5 confirmations</td></tr>
  <tr><td>Block Maturity</td><td>8 hours</td></tr>
  <tr><td>Minimum Stake Age</td><td>12 hours</td></tr>
</table>
*additional coins in premine not for snapshot distributed to promote the project (not to be retained by developers)

### Reward Distribution

<table>
<th colspan=4>PoW Phase</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>11,500,000 GROW</td><td>Initial Premine to Former Chain</td></tr>
<tr><td>2-1000</td><td>0.1 GROW</td><td>Closed Mining</td></tr>
<tr><th colspan=4>PoS Phase</th></tr>
<tr><th>Block Height</th><th colspan=1>Reward Amount</th></tr>
<tr><td>1,001-15,000</td><td>1 GROW</td></tr>
  <tr><td>15,001-65,000</td><td>4 GROW</td></tr>
  <tr><td>65,001-120,000</td><td>12 GROW</td></tr>
    <tr><td>120,001-160,000</td><td>10 GROW</td></tr>
  <tr><td>160,001-*</td><td>8 GROW</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes & Stakers</th>
<tr><td>1,001-*</td><td>70% ( GROW) & 30% ( GROW) respectively</td></tr>
</table>


<table>
  <th colspan=1>Masternode Installation Script:</th>
  <tr><td>Remote Masternode VPS, Ubuntu 18.04 LTS, 1GB RAM, 1 CPU Core </td></td>  
<tr><td>sudo curl -L https://raw.githubusercontent.com/growaleaf/GrowMN/master/GrowMN-Install.sh | bash</td></td>
</table>
