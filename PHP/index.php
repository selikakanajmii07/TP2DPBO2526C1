<?php
require_once __DIR__ . "/Produk.php";
require_once __DIR__ . "/Tiket.php";
require_once __DIR__ . "/TiketVIP.php";

$daftarProduk = [];
$daftarProduk[] = new Produk(1, "Popcorn Caramel", 25000, "foto/popcorn.jpg");
$daftarProduk[] = new Produk(2, "Cola Medium", 15000, "foto/cola.jpg");
$daftarProduk[] = new Tiket(3, "Tiket Reguler", 35000, "foto/tiket_reguler.jpg", "TKT001", "Inside Out 3", "14:00");
$daftarProduk[] = new Tiket(4, "Tiket Reguler", 35000, "foto/tiket_reguler.jpg", "TKT002", "Wall-E 2", "16:30");
$daftarProduk[] = new TiketVIP(5, "Tiket VIP", 75000, "foto/tiket_vip.jpg", "TKT003", "Inside Out 3", "19:00", "Sofa Bed + Snack Combo", 40000, "VIP-A1");
$daftarProduk[] = new Produk(6, "M&M Chocolate", 20000, "foto/mnm.jpg");
$daftarProduk[] = new TiketVIP(7, "Tiket VIP", 80000, "foto/tiket_vip.jpg", "TKT004", "Zootopia 2", "20:00", "Sofa Bed + Free Popcorn", 45000, "VIP-B2");
?>
<!DOCTYPE html>
<html lang="id">
<head>
<meta charset="UTF-8">
<title>Bioskop</title>
<style>
    body { font-family: Arial, sans-serif; max-width: 1100px; margin: 40px auto; background:#f9f9f9; color:#222; }
    h1 { text-align:center; }
    table { width:100%; border-collapse: collapse; background:#fff; margin-top:20px; }
    th, td { border:1px solid #ddd; padding:8px; text-align:left; font-size:14px; }
    th { background:#222; color:#fff; }
    tr:nth-child(even) { background:#f4f4f4; }
    .tipe-Produk { color:#666; }
    .tipe-Tiket { color:#1a73e8; font-weight:bold; }
    .tipe-TiketVIP { color:#c2185b; font-weight:bold; }
    .diagram { background:#fff; padding:15px; border-radius:8px; margin-bottom:20px; font-family: monospace; white-space: pre; }
</style>
</head>
<body>

<h1>Manajemen Produk Bioskop</h1>

<h2>Tabel Gabungan Seluruh Data</h2>
<table>
    <tr>
        <th>No</th>
        <th>ID</th>
        <th>Nama Produk</th>
        <th>Harga</th>
        <th>Tipe</th>
        <th>Foto Produk</th>
        <th>Kode Tiket</th>
        <th>Judul Film</th>
        <th>Jam Tayang</th>
        <th>Fasilitas VIP</th>
        <th>Harga Tambahan</th>
        <th>Nomor Kursi</th>
    </tr>
    <?php foreach ($daftarProduk as $i => $produk):
        $baris = $produk->getBarisTabel();
        $tipe = $produk->getTipe();
    ?>
    <tr>
        <td><?= $i + 1 ?></td>
        <td><?= htmlspecialchars($baris[0]) ?></td>
        <td><?= htmlspecialchars($baris[1]) ?></td>
        <td><?= htmlspecialchars($baris[2]) ?></td>
        <td class="tipe-<?= $tipe ?>"><?= htmlspecialchars($tipe) ?></td>
        <td><?= htmlspecialchars($baris[4]) ?></td>
        <td><?= htmlspecialchars($baris[5]) ?></td>
        <td><?= htmlspecialchars($baris[6]) ?></td>
        <td><?= htmlspecialchars($baris[7]) ?></td>
        <td><?= htmlspecialchars($baris[8]) ?></td>
        <td><?= htmlspecialchars($baris[9]) ?></td>
        <td><?= htmlspecialchars($baris[10]) ?></td>
    </tr>
    <?php endforeach; ?>
</table>

</body>
</html>
